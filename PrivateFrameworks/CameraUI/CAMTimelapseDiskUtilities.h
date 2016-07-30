//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMTimelapseDiskUtilities : NSObject
{
}

+ (_Bool)hasPendingWork;
+ (_Bool)removeDummyFileForTimelapseUUID:(id)arg1;
+ (_Bool)reserveDummyFileForTimelapseUUID:(id)arg1 width:(long long)arg2 height:(long long)arg3;
+ (id)dummyFilePathForTimelapseUUID:(id)arg1;
+ (id)dummyFileName;
+ (id)sortedArrayFromFilePathDictionary:(id)arg1 reverse:(_Bool)arg2;
+ (id)readFrameFilePathsForTimelapseUUID:(id)arg1;
+ (id)readSortedStatesFromDiskMergeSecondaryState:(_Bool)arg1;
+ (id)updateSecondaryStateForTimelapseUUID:(id)arg1 forStateReadSuccessfully:(_Bool)arg2;
+ (id)updateSecondaryStateForMovieWriteAttemptForTimelapseUUID:(id)arg1;
+ (id)updateSecondaryStateForTimelapseUUID:(id)arg1 withStopReasons:(long long)arg2 stopTime:(id)arg3;
+ (_Bool)writeSecondaryStateToDisk:(id)arg1 forTimelapseUUID:(id)arg2;
+ (id)readSecondaryStateForTimelapseUUID:(id)arg1;
+ (id)secondaryStateFilePathForTimelapseUUID:(id)arg1;
+ (_Bool)writeStateToDisk:(id)arg1 createDirectoryIfNeeded:(_Bool)arg2;
+ (id)readStateForTimelapseUUID:(id)arg1 mergeSecondaryState:(_Bool)arg2;
+ (id)stateFilePathForTimelapseUUID:(id)arg1;
+ (id)timelapseUUIDsOnDisk;
+ (long long)frameIndexFromImageFileName:(id)arg1;
+ (id)fileNameForImageVISIndex:(long long)arg1;
+ (id)fileNameForImageFrameIndex:(long long)arg1;
+ (id)directoryPathForTimelapseUUID:(id)arg1;
+ (id)timelapseDirectoryPathCreateIfNeeded:(_Bool)arg1;
+ (id)timelapseDirectoryPath;
+ (id)secondaryStateFileName;
+ (id)stateFileName;

@end

