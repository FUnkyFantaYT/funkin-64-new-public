function onCreate()
	makeAnimatedLuaSprite('bg', 'mario kart bg', 0, -1000);
	addAnimationByPrefix('bg', 'bg', 'bg', 24, true)
	addLuaSprite('bg', false);
	objectPlayAnimation('bg', 'bg', true)
	close(true); --For performance reasons, close this script once the stage is fully loaded, as this script won't be used anymore after loading the stage
end
