package;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.FlxSubState;
import flixel.math.FlxMath;
import flixel.math.FlxPoint;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;

class GameOverSubstate extends MusicBeatSubstate
{
	var camFollow:FlxPoint;
	var camFollowPos:FlxObject;
	var updateCamera:Bool = false;
	var stageSuffix:String = "";
	
	public static var characterName:String = 'bf';
	public static var deathSoundName:String = 'fnf_loss_sfx';
	public static var loopSoundName:String = 'gameOver';
	public static var endSoundName:String = 'gameOverEnd';
	public static var instance:GameOverSubstate;

	var video = false;
	var exit = false;

	public static function resetVariables() {
		characterName = 'bf';
		deathSoundName = 'fnf_loss_sfx';
		loopSoundName = 'gameOver';
		endSoundName = 'gameOverEnd';
	}

	override function create() {
		instance = this;
		super.create();
	}

	public function new(x:Float, y:Float, camX:Float, camY:Float) {
		super();
		Conductor.songPosition = 0;
		if(PlayState.deathCounter == 3) PlayState.SONG = Song.loadFromJson(PlayState.SONG.song + '-easy', PlayState.SONG.song);
		if(PlayState.SONG.song == PlayState.mariosong) {
			playvideo('mariodead');
		} else {
			MusicBeatState.resetState();
		}
		CoolUtil.senddiscordmessage('someone has died in ' + PlayState.SONG.song);
		Conductor.changeBPM(100);
	}

	var isFollowingAlready:Bool = false;

	override function update(elapsed:Float) {
		super.update(elapsed);
		if(updateCamera) {
			var lerpVal:Float = CoolUtil.boundTo(elapsed * 0.6, 0, 1);
			camFollowPos.setPosition(FlxMath.lerp(camFollowPos.x, camFollow.x, lerpVal), FlxMath.lerp(camFollowPos.y, camFollow.y, lerpVal));
		}
		if (controls.ACCEPT) {
			if(video = false) {
				endBullshit();
			}
			exit = false;
		}
		if (controls.BACK) {
			if(video = false) {
				exitstuff();
			} else {
				exit = true;
			}
		}
		if (FlxG.sound.music.playing) Conductor.songPosition = FlxG.sound.music.time;
	}

	override function beatHit() {
		super.beatHit();
	}

	var isEnding:Bool = false;

	function coolStartDeath(?volume:Float = 1):Void {
		FlxG.sound.playMusic(Paths.music(loopSoundName), volume);
	}

	function endBullshit():Void {
		if (!isEnding) {
			isEnding = true;
			FlxG.sound.music.stop();
			new FlxTimer().start(0.7, function(tmr:FlxTimer) {
				FlxG.camera.fade(FlxColor.BLACK, 2, false, function() {
					MusicBeatState.resetState();
				});
			});
		}
	}

	function playvideo(name:String) {
		video = true;
		var bg = new FlxSprite(-FlxG.width, -FlxG.height).makeGraphic(FlxG.width * 3, FlxG.height * 3, FlxColor.BLACK);
		bg.scrollFactor.set();
		add(bg);
		var addstuff = '';
		if(ClientPrefs.flashing) addstuff = 'noflash';
		new FlxTimer().start(1, function(tmr:FlxTimer) {
			(new FlxVideo('assets/videos/' + name + addstuff + '.mp4', -160)).finishCallback = function() {
				remove(bg);
				if(exit = true) {
					exitstuff();
				} else {
					MusicBeatState.resetState();
				}
			}
		});
	}

	function exitstuff() {
		FlxG.sound.music.stop();
		PlayState.deathCounter = 0;
		PlayState.coincounter = 0;
		PlayState.seenCutscene = false;
		MusicBeatState.switchState(new MainMenuState());
	}
}
