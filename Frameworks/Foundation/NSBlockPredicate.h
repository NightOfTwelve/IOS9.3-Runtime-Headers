//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSPredicate.h>

@interface NSBlockPredicate : NSPredicate
{
    CDUnknownBlockType _block;
}

- (CDUnknownBlockType)_predicateBlock;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)predicateFormat;
- (_Bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)supportsSecureCoding;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

