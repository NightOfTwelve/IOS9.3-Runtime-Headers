//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSUUID, TSPComponent, TSPObject;
@protocol TSPLazyReferenceDelegate;

__attribute__((visibility("hidden")))
@interface TSPLazyReference : NSObject <NSCopying>
{
    TSPObject *_strongObject;
    TSPObject *_weakObject;
    struct {
        unsigned int isWeak:1;
        unsigned int isExternal:1;
        unsigned int allowUnknownObject:1;
    } _flags;
    id <TSPLazyReferenceDelegate> _delegate;
    long long _identifier;
    TSPComponent *_component;
}

+ (id)weakReferenceForObject:(id)arg1;
+ (id)referenceForObject:(id)arg1;
@property(nonatomic) __weak TSPComponent *component; // @synthesize component=_component;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <TSPLazyReferenceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)resetToIdentifier:(long long)arg1;
- (void)resetIdentifierFromCopy:(_Bool)arg1;
- (_Bool)discardStrongObjectIfPossible;
@property(nonatomic) _Bool isExternal;
@property(readonly, nonatomic) _Bool isWeak;
@property(retain, nonatomic) TSPObject *strongObject;
@property(readonly, nonatomic) TSPObject *weakObject;
@property(readonly, nonatomic) NSUUID *objectUUID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2;
- (_Bool)referencesObject:(id)arg1;
- (_Bool)isEqualToLazyReference:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) id objectIfLoaded;
@property(readonly, nonatomic) id object;
- (id)initWithObject:(id)arg1 isWeak:(_Bool)arg2;
- (id)initWeakReferenceWithObject:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 isWeak:(_Bool)arg3 allowUnknownObject:(_Bool)arg4;
- (id)init;

@end

