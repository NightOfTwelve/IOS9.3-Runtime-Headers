//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLLocation, MKSearchCompletion, NSDate, NSDictionary, NSHashTable, NSMutableArray, NSString, NSTimeZone, NSTimer;

@interface City : NSObject
{
    NSString *_updateTimeString;
    NSMutableArray *_dayForecasts;
    NSMutableArray *_hourlyForecasts;
    _Bool _autoUpdate;
    _Bool _isDay;
    _Bool _isLocalWeatherCity;
    _Bool _transient;
    _Bool _isHourlyDataCelsius;
    _Bool _dataCelsius;
    _Bool _isUpdating;
    _Bool _isRequestedByFrameworkClient;
    _Bool _lockedForDemoMode;
    _Bool _updatingTimeZone;
    float _windChill;
    float _windDirection;
    float _windSpeed;
    float _humidity;
    float _visibility;
    float _pressure;
    float _dewPoint;
    float _feelsLike;
    float _heatIndex;
    int _lastUpdateStatus;
    int _updateInterval;
    NSString *_temperature;
    NSDate *_updateTime;
    unsigned long long _conditionCode;
    NSString *_name;
    NSString *_state;
    unsigned long long _observationTime;
    unsigned long long _sunsetTime;
    unsigned long long _sunriseTime;
    unsigned long long _moonPhase;
    unsigned long long _uvIndex;
    double _precipitationPast24Hours;
    NSString *_link;
    NSString *_deeplink;
    CLLocation *_location;
    long long _secondsFromGMT;
    NSTimeZone *_timeZone;
    NSDate *_timeZoneUpdateDate;
    unsigned long long _lastUpdateDetail;
    long long _pressureRising;
    unsigned long long _lastUpdateWarning;
    NSString *_fullName;
    MKSearchCompletion *_searchCompletion;
    NSTimer *_autoUpdateTimer;
    NSHashTable *_cityUpdateObservers;
}

+ (id)cityContainingLocation:(id)arg1 expectedName:(id)arg2 fromCities:(id)arg3;
+ (id)descriptionForWeatherUpdateDetail:(unsigned long long)arg1;
@property(retain, nonatomic) NSHashTable *cityUpdateObservers; // @synthesize cityUpdateObservers=_cityUpdateObservers;
@property(nonatomic, getter=isUpdatingTimeZone) _Bool updatingTimeZone; // @synthesize updatingTimeZone=_updatingTimeZone;
@property(retain, nonatomic) NSTimer *autoUpdateTimer; // @synthesize autoUpdateTimer=_autoUpdateTimer;
@property(nonatomic) int updateInterval; // @synthesize updateInterval=_updateInterval;
@property(retain, nonatomic) MKSearchCompletion *searchCompletion; // @synthesize searchCompletion=_searchCompletion;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(nonatomic) _Bool lockedForDemoMode; // @synthesize lockedForDemoMode=_lockedForDemoMode;
@property(nonatomic) _Bool isRequestedByFrameworkClient; // @synthesize isRequestedByFrameworkClient=_isRequestedByFrameworkClient;
@property(nonatomic) _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
@property(nonatomic) unsigned long long lastUpdateWarning; // @synthesize lastUpdateWarning=_lastUpdateWarning;
@property(nonatomic) int lastUpdateStatus; // @synthesize lastUpdateStatus=_lastUpdateStatus;
@property(nonatomic) float heatIndex; // @synthesize heatIndex=_heatIndex;
@property(nonatomic) float feelsLike; // @synthesize feelsLike=_feelsLike;
@property(nonatomic) float dewPoint; // @synthesize dewPoint=_dewPoint;
@property(nonatomic) long long pressureRising; // @synthesize pressureRising=_pressureRising;
@property(nonatomic) float pressure; // @synthesize pressure=_pressure;
@property(nonatomic) float visibility; // @synthesize visibility=_visibility;
@property(nonatomic) float humidity; // @synthesize humidity=_humidity;
@property(nonatomic) float windSpeed; // @synthesize windSpeed=_windSpeed;
@property(nonatomic) float windDirection; // @synthesize windDirection=_windDirection;
@property(nonatomic) float windChill; // @synthesize windChill=_windChill;
@property(nonatomic, getter=isDataCelsius) _Bool dataCelsius; // @synthesize dataCelsius=_dataCelsius;
@property(nonatomic) unsigned long long lastUpdateDetail; // @synthesize lastUpdateDetail=_lastUpdateDetail;
@property(nonatomic) _Bool isHourlyDataCelsius; // @synthesize isHourlyDataCelsius=_isHourlyDataCelsius;
@property(retain, nonatomic) NSDate *timeZoneUpdateDate; // @synthesize timeZoneUpdateDate=_timeZoneUpdateDate;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) long long secondsFromGMT; // @synthesize secondsFromGMT=_secondsFromGMT;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *deeplink; // @synthesize deeplink=_deeplink;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(nonatomic) double precipitationPast24Hours; // @synthesize precipitationPast24Hours=_precipitationPast24Hours;
@property(nonatomic, setter=setUVIndex:) unsigned long long uvIndex; // @synthesize uvIndex=_uvIndex;
@property(nonatomic) unsigned long long moonPhase; // @synthesize moonPhase=_moonPhase;
@property(nonatomic) unsigned long long sunriseTime; // @synthesize sunriseTime=_sunriseTime;
@property(nonatomic) unsigned long long sunsetTime; // @synthesize sunsetTime=_sunsetTime;
@property(nonatomic) unsigned long long observationTime; // @synthesize observationTime=_observationTime;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic, getter=isTransient) _Bool transient; // @synthesize transient=_transient;
@property(nonatomic) _Bool isLocalWeatherCity; // @synthesize isLocalWeatherCity=_isLocalWeatherCity;
@property(retain, nonatomic) NSDate *updateTime; // @synthesize updateTime=_updateTime;
- (void).cxx_destruct;
- (void)_generateLocalizableStrings;
- (int)precipitationForecast;
- (id)naturalLanguageDescriptionWithDescribedCondition:(out long long *)arg1;
- (id)naturalLanguageDescription;
- (long long)locationOfTime:(long long)arg1;
- (long long)primaryConditionForRange:(struct _NSRange)arg1;
- (_Bool)isDuplicateOfCity:(id)arg1;
- (double)distanceToLatitude:(double)arg1 longitude:(double)arg2;
- (double)distanceToLocation:(id)arg1;
- (_Bool)containsLatitude:(double)arg1 longitude:(double)arg2;
- (id)windDirectionAsString:(double)arg1;
- (void)discardDataIfNeeded;
- (_Bool)populateWithDataFromCity:(id)arg1;
@property(readonly, nonatomic) NSString *locationID;
@property(nonatomic) double longitude;
@property(nonatomic) double latitude;
@property(nonatomic) unsigned long long conditionCode; // @synthesize conditionCode=_conditionCode;
@property(copy, nonatomic) NSString *woeid;
- (id)cityAndState;
- (id)updateTimeString;
- (_Bool)isUpdatingOrNoData;
- (_Bool)_isUpdating;
- (void)finishedUpdating:(int)arg1 statusDetail:(unsigned long long)arg2;
- (void)addUpdateWarning:(unsigned long long)arg1;
- (void)addHourlyForecast:(id)arg1;
- (id)hourlyForecasts;
- (void)setHourlyForecasts:(id)arg1;
- (void)addDayForecast:(id)arg1;
- (void)clearForecasts;
- (void)updateTimeZoneWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_updateTimeZone;
- (void)update;
- (void)localWeatherDidBeginUpdate;
- (int)weatherDataAge;
@property(nonatomic) _Bool isDay;
- (long long)timeDigit;
- (id)dayForecasts;
- (void)setDayForecasts:(id)arg1;
@property(copy, nonatomic) NSString *temperature; // @synthesize temperature=_temperature;
- (id)displayName;
- (void)setAutoUpdate:(_Bool)arg1;
- (void)_clearAutoUpdateTimer;
- (void)removeUpdateObserver:(id)arg1;
- (void)addUpdateObserver:(id)arg1;
- (id)detailedDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)init;
@property(readonly) NSDictionary *urlComponents;

@end

