//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspaceResponse.h>

@class BSMachPortSendRight;

@interface FBSUIApplicationLaunchResponse : FBSWorkspaceResponse
{
    _Bool _supportsTaskSuspension;
    _Bool _supportsTaskSuspensionOnLock;
    BSMachPortSendRight *_taskPort;
}

@property(retain, nonatomic) BSMachPortSendRight *taskPort; // @synthesize taskPort=_taskPort;
@property(nonatomic) _Bool supportsTaskSuspensionOnLock; // @synthesize supportsTaskSuspensionOnLock=_supportsTaskSuspensionOnLock;
@property(nonatomic) _Bool supportsTaskSuspension; // @synthesize supportsTaskSuspension=_supportsTaskSuspension;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)dealloc;

@end
