//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SSDownloadManagerOptions;

@interface SUClientQueueSession : NSObject
{
    long long _count;
    NSArray *_downloadKinds;
    SSDownloadManagerOptions *_managerOptions;
    id _queue;
}

@property(retain, nonatomic) id queue; // @synthesize queue=_queue;
@property(copy, nonatomic) SSDownloadManagerOptions *managerOptions; // @synthesize managerOptions=_managerOptions;
@property(copy, nonatomic) NSArray *downloadKinds; // @synthesize downloadKinds=_downloadKinds;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

