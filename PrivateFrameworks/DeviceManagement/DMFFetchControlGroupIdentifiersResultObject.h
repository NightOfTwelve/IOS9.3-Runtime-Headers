//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchControlGroupIdentifiersResultObject : CATTaskResultObject
{
    NSArray *_groupIdentifiers;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *groupIdentifiers; // @synthesize groupIdentifiers=_groupIdentifiers;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

