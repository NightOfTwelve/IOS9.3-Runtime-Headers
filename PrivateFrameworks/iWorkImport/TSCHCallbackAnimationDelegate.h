//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCHCallbackAnimationDelegate : NSObject
{
    id target;
    SEL selector;
}

@property(nonatomic) SEL selector; // @synthesize selector;
@property(retain, nonatomic) id target; // @synthesize target;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)dealloc;

@end

