//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDSFoundation/IDSDelegateInfo.h>

@interface _IDSGenericCompletionHandler : IDSDelegateInfo
{
    CDUnknownBlockType _handler;
}

@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void)dealloc;
- (id)initWithHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;

@end

