//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPUFoundation/MPUOperation.h>

@interface MPUBlockOperation : MPUOperation
{
    CDUnknownBlockType _operationBlock;
}

+ (id)mainQueueBlockOperationWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)execute;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

