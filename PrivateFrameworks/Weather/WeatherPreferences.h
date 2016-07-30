//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Weather/NSURLConnectionDelegate-Protocol.h>

@class NSArray, NSString, WeatherCloudPreferences;
@protocol OS_dispatch_queue, SynchronizedDefaultsDelegate, WeatherPreferencesPersistence;

@interface WeatherPreferences : NSObject <NSURLConnectionDelegate>
{
    _Bool _isCelsius;
    NSString *_UUID;
    NSString *_serviceHost;
    _Bool _serviceDebugging;
    NSArray *_lastUbiquitousWrittenDefaults;
    id <WeatherPreferencesPersistence> _persistence;
    _Bool _userGroupPrefsLockedWhenInit;
    id <SynchronizedDefaultsDelegate> _syncDelegate;
    WeatherCloudPreferences *_cloudPreferences;
    NSObject<OS_dispatch_queue> *_celsiusQueue;
}

+ (id)serviceDebuggingPath;
+ (id)_getGroupDefaultsFromURLInApp:(id)arg1;
+ (id)preferencesWithPersistence:(id)arg1;
+ (id)userDefaultsPersistence;
+ (void)clearSharedPreferences;
+ (id)sharedPreferences;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *celsiusQueue; // @synthesize celsiusQueue=_celsiusQueue;
@property(nonatomic) _Bool userGroupPrefsLockedWhenInit; // @synthesize userGroupPrefsLockedWhenInit=_userGroupPrefsLockedWhenInit;
@property(retain) WeatherCloudPreferences *cloudPreferences; // @synthesize cloudPreferences=_cloudPreferences;
@property(nonatomic) __weak id <SynchronizedDefaultsDelegate> syncDelegate; // @synthesize syncDelegate=_syncDelegate;
- (void).cxx_destruct;
- (_Bool)areCitiesDefault:(id)arg1;
- (void)saveToUbiquitousStore;
- (void)_clearCachedObjects;
- (void)resetLocale;
- (_Bool)serviceDebugging;
- (_Bool)isLocalWeatherEnabled;
- (void)setLocalWeatherEnabled:(_Bool)arg1;
- (id)readInternalDefaultValueForKey:(id)arg1;
- (id)readDefaultValueForKey:(id)arg1;
- (void)writeDefaultValue:(id)arg1 forKey:(id)arg2;
- (id)_cacheDirectoryPath;
- (id)twcLogoURL:(id)arg1;
- (id)twcLogoURL;
- (id)serviceHost;
- (id)UUID;
- (void)synchronizeStateToDisk;
- (void)synchronizeStateToDiskDoNotify:(_Bool)arg1;
- (void)setDefaultSelectedCityID:(id)arg1;
- (void)setDefaultSelectedCity:(unsigned long long)arg1;
- (id)loadDefaultSelectedCityID;
- (int)loadDefaultSelectedCity;
- (void)setActiveCity:(unsigned long long)arg1;
- (int)loadActiveCity;
- (id)citiesByConsolidatingDuplicatesInBucket:(id)arg1;
- (id)citiesByConsolidatingDuplicates:(id)arg1 originalOrder:(id)arg2;
- (id)loadSavedCities;
- (_Bool)cityDictionaryHasValidCoordinates:(id)arg1;
- (void)setDefaultCities:(id)arg1;
- (id)_defaultCities;
- (void)saveToDiskWithCities:(id)arg1 activeCity:(unsigned long long)arg2;
- (void)saveToDiskWithCities:(id)arg1;
- (void)saveToDiskWithCity:(id)arg1 forActiveIndex:(unsigned long long)arg2;
- (void)saveToDiskWithLocalWeatherCity:(id)arg1;
- (id)localWeatherCity;
- (id)cityFromPreferencesDictionary:(id)arg1;
- (id)preferencesDictionaryForCity:(id)arg1;
- (_Bool)_defaultsCurrent;
- (_Bool)_defaultsAreValid;
- (void)updateUnitsFromNotification;
- (_Bool)isCelsius;
- (id)yahooWeatherURLString;
- (void)setYahooWeatherURLString:(id)arg1;
- (void)setCelsius:(_Bool)arg1;
- (void)dealloc;
- (_Bool)readTemperatureUnits;
- (void)registerTemperatureUnits;
- (void)adjustPrefsForLocalWeatherEnabled:(_Bool)arg1;
- (_Bool)ensureValidSelectedCityID;
- (void)setupUbiquitousStoreIfNeeded;
- (id)initWithPersistence:(id)arg1;
- (id)init;
- (_Bool)_ensurePrefsLoaded;
- (void)initOnPrefLoadWithPersistence:(id)arg1;
- (_Bool)performMigration;
- (_Bool)_checkAndPerformMigrationIfNeeded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

