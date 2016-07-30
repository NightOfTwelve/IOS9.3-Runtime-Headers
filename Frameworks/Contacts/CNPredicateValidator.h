//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/NSPredicateVisitor-Protocol.h>

@class NSArray, NSError, NSMutableSet, NSPredicate, NSSet;

@interface CNPredicateValidator : NSObject <NSPredicateVisitor>
{
    _Bool _validated;
    NSPredicate *_predicate;
    NSSet *_allowedKeysSet;
    NSMutableSet *_usedKeysSet;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool validated; // @synthesize validated=_validated;
@property(retain, nonatomic) NSMutableSet *usedKeysSet; // @synthesize usedKeysSet=_usedKeysSet;
@property(retain, nonatomic) NSSet *allowedKeysSet; // @synthesize allowedKeysSet=_allowedKeysSet;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void)visitPredicateOperator:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)resetUsedKeys;
@property(readonly, copy, nonatomic) NSArray *usedKeys;
- (void)visitPredicateExpression:(id)arg1;
@property(retain, nonatomic) NSArray *allowedKeys;
- (_Bool)validateWithError:(id *)arg1;
- (void)dealloc;

@end

