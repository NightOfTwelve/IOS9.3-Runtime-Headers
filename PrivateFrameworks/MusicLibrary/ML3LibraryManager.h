//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3MusicLibrary;

@interface ML3LibraryManager : NSObject
{
    ML3MusicLibrary *_currentLibrary;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_switchToLibrary:(id)arg1;
- (void)_teardownNotifications;
- (void)_setupNotifications;
- (void)_deviceSharedLibraryDidChangeDistributedNotification:(id)arg1;
- (id)pathToLibraryForAccount:(id)arg1;
- (id)libraryForAccount:(id)arg1;
@property(retain, nonatomic) ML3MusicLibrary *currentLibrary;
- (void)dealloc;
- (id)init;

@end

