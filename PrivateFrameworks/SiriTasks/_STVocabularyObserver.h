//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _STVocabularyObserver : NSObject
{
    id __observer;
    SEL __selector;
    NSString *__name;
    id __object;
    _STVocabularyObserver *__strongReferenceToSelf;
}

@property(retain, nonatomic) _STVocabularyObserver *_strongReferenceToSelf; // @synthesize _strongReferenceToSelf=__strongReferenceToSelf;
@property(retain, nonatomic) id _object; // @synthesize _object=__object;
@property(copy, nonatomic) NSString *_name; // @synthesize _name=__name;
@property(nonatomic) SEL _selector; // @synthesize _selector=__selector;
@property(nonatomic) __weak id _observer; // @synthesize _observer=__observer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopObserving;
- (void)_dispatchNotification:(id)arg1;
- (void)_stopObservingIfPossible;
- (id)_initWithObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;

@end

