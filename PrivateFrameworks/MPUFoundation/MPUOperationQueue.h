//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperationQueue.h>

@protocol MPUOperationQueueDelegate;

@interface MPUOperationQueue : NSOperationQueue
{
    id <MPUOperationQueueDelegate> _delegate;
}

@property(nonatomic) __weak id <MPUOperationQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;
- (void)addOperation:(id)arg1;
- (void)dealloc;

@end
