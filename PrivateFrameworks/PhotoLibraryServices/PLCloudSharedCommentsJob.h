//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSDictionary, NSString;

@interface PLCloudSharedCommentsJob : PLCloudSharingJob
{
    long long _jobType;
    NSArray *_msASComments;
    NSString *_commentGUID;
    NSString *_assetGUID;
    NSString *_albumGUID;
    NSDictionary *_mstreamdInfoDictionary;
}

+ (id)directoryPathForInFlightComments:(_Bool)arg1;
+ (void)locallyProcessDeletedComments:(id)arg1 info:(id)arg2;
+ (void)locallyProcessAddedComments:(id)arg1 assetGUID:(id)arg2 albumGUID:(id)arg3 info:(id)arg4;
+ (void)deleteSharedCommentFromServer:(id)arg1;
+ (void)publishCommentToServer:(id)arg1;
@property(retain, nonatomic) NSDictionary *mstreamdInfoDictionary; // @synthesize mstreamdInfoDictionary=_mstreamdInfoDictionary;
@property(retain, nonatomic) NSString *albumGUID; // @synthesize albumGUID=_albumGUID;
@property(retain, nonatomic) NSString *assetGUID; // @synthesize assetGUID=_assetGUID;
@property(retain, nonatomic) NSString *commentGUID; // @synthesize commentGUID=_commentGUID;
@property(retain, nonatomic) NSArray *msASComments; // @synthesize msASComments=_msASComments;
@property(nonatomic) long long jobType; // @synthesize jobType=_jobType;
- (void)executeDeleteCommentFromServer;
- (void)executePublishCommentToServer;
- (void)executeProcessServerNotificationOfCommentChanges;
- (void)runDaemonSide;
- (_Bool)shouldArchiveXPCToDisk;
- (void)run;
- (long long)daemonOperation;
- (void)dealloc;
- (id)description;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;

@end

