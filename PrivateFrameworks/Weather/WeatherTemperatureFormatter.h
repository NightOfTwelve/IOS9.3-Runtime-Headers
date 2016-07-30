//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSLocale, WeatherPreferences;

@interface WeatherTemperatureFormatter : NSFormatter
{
    _Bool _inputIsCelsius;
    int _formatStyle;
    int _outputUnits;
    WeatherPreferences *_preferences;
    NSLocale *_locale;
}

+ (id)formattedTemperatureFromString:(id)arg1 inputIsCelsius:(_Bool)arg2;
@property int outputUnits; // @synthesize outputUnits=_outputUnits;
@property(retain) NSLocale *locale; // @synthesize locale=_locale;
@property(retain) WeatherPreferences *preferences; // @synthesize preferences=_preferences;
@property int formatStyle; // @synthesize formatStyle=_formatStyle;
@property _Bool inputIsCelsius; // @synthesize inputIsCelsius=_inputIsCelsius;
- (void).cxx_destruct;
- (int)_temperatureByConvertingTemperatureToUserUnits:(int)arg1;
- (int)formatWidth;
- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)fallbackTemperatureString;
- (id)formattedTemperatureFromString:(id)arg1;
- (id)init;

@end

