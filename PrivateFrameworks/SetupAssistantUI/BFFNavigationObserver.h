//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol UINavigationControllerDelegate;

__attribute__((visibility("hidden")))
@interface BFFNavigationObserver : NSObject
{
    id <UINavigationControllerDelegate> _observer;
}

+ (id)observerWithObserver:(id)arg1;
@property(nonatomic) __weak id <UINavigationControllerDelegate> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;

@end

