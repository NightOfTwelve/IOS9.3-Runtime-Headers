//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface BSAbstractDefaultDomain : NSObject
{
    NSUserDefaults *_userDefaults;
    _Bool _boundDefaults;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableSet *_observerQueue_observers;
    NSMutableDictionary *_defaultKeyToDefaultValue;
}

+ (void)__assignPropertyImplementations:(id)arg1;
+ (_Bool)__useDynamicMethodResolution;
+ (Class)__classFromPropertyType:(id)arg1;
+ (_Bool)__isPropertyTypeValid:(BOOL)arg1 class:(Class)arg2;
+ (id)__getPropertyMetadataForProperty:(struct objc_property *)arg1;
+ (void)__processPropertyMetadata:(id)arg1;
+ (void)initialize;
- (_Bool)_isCollectionEmpty:(id)arg1;
- (id)_propertyFromSelector:(SEL)arg1;
- (id)_defaultKeyFromPropertyName:(id)arg1;
- (void)_bindDefaultsIfNecessary;
- (void)_resetAllDefaults;
- (void)_setUserDefaults:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2 toDefaultValue:(id)arg3 options:(unsigned long long)arg4;
- (void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2 toDefaultValue:(id)arg3;
- (void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2;
- (void)_bindAndRegisterDefaults;
- (id)_store;
- (void)_removeObserver:(id)arg1;
- (void)_addObserver:(id)arg1;
- (id)observeDefaults:(id)arg1 onQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)observeDefault:(id)arg1 onQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)synchronizeDefaults;
- (void)dealloc;
- (id)_initWithDomain:(id)arg1;
- (id)init;
- (id)_initWithDefaults:(id)arg1;

@end

