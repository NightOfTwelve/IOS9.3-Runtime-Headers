//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKPredicateValidatorInstance.h>

@protocol CKObjectValidating;

__attribute__((visibility("hidden")))
@interface CKRecursivePredicateValidator : CKPredicateValidatorInstance
{
    id <CKObjectValidating> _validator;
}

@property(retain, nonatomic) id <CKObjectValidating> validator; // @synthesize validator=_validator;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (_Bool)validate:(id)arg1 error:(id *)arg2;
- (id)initWithValidator:(id)arg1;

@end

