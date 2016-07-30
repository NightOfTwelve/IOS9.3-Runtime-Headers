//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSError, NSString, NSURL;

@interface CAMVideoLocalPersistenceResult : NSObject
{
    NSURL *_localDestinationURL;
    NSString *_localPersistenceUUID;
    NSString *_stillPersistenceUUID;
    NSDate *_creationDate;
    NSError *_error;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _stillDisplayTime;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) CDStruct_1b6d18a9 stillDisplayTime; // @synthesize stillDisplayTime=_stillDisplayTime;
@property(readonly, copy, nonatomic) NSString *stillPersistenceUUID; // @synthesize stillPersistenceUUID=_stillPersistenceUUID;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(readonly, copy, nonatomic) NSString *localPersistenceUUID; // @synthesize localPersistenceUUID=_localPersistenceUUID;
@property(readonly, copy, nonatomic) NSURL *localDestinationURL; // @synthesize localDestinationURL=_localDestinationURL;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 UUID:(id)arg2 duration:(CDStruct_1b6d18a9)arg3 stillPersistenceUUID:(id)arg4 stillDisplayTime:(CDStruct_1b6d18a9)arg5 creationDate:(id)arg6 error:(id)arg7;
- (id)init;

@end

