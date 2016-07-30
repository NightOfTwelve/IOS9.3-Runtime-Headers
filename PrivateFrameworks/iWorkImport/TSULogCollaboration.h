//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL, TSUASLClient, TSUASLLogFile;

__attribute__((visibility("hidden")))
@interface TSULogCollaboration : NSObject
{
    TSUASLClient *_aslClient;
    int _logFileLevelMask;
    int _stderrLevelMask;
    TSUASLLogFile *_currentLogFile;
    _Bool _shouldLogCommandTrace;
    _Bool _shouldLogToFile;
    _Bool _shouldLogToStderr;
    int _filterLevel;
    NSURL *_logFileURL;
}

+ (void)defineCategories;
+ (id)sharedInstance;
@property(nonatomic) _Bool shouldLogToStderr; // @synthesize shouldLogToStderr=_shouldLogToStderr;
@property(nonatomic) _Bool shouldLogToFile; // @synthesize shouldLogToFile=_shouldLogToFile;
@property(nonatomic) _Bool shouldLogCommandTrace; // @synthesize shouldLogCommandTrace=_shouldLogCommandTrace;
@property(readonly, nonatomic) NSURL *logFileURL; // @synthesize logFileURL=_logFileURL;
@property(nonatomic) int filterLevel; // @synthesize filterLevel=_filterLevel;
- (void).cxx_destruct;
- (id)description;
- (id)aslClient;
- (int)_clampLevelToValidRange:(int)arg1;
- (id)_createASLClient;
- (id)_createLogFileURL;
- (id)init;

@end

