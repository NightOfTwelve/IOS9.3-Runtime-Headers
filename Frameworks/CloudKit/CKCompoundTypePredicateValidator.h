//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKPredicateValidatorInstance.h>

__attribute__((visibility("hidden")))
@interface CKCompoundTypePredicateValidator : CKPredicateValidatorInstance
{
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)CKPropertiesDescription;
- (_Bool)validate:(id)arg1 error:(id *)arg2;
- (id)initWithType:(unsigned long long)arg1;

@end

