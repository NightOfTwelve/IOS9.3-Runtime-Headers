//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (InsignificantCharacterFiltering)
- (id)MLSortStringWithPrefix;
- (id)MLSortString;
- (id)copyWithoutInsignificantCharacters;
- (id)copyWithoutInsignificantPrefixAndCharacters;
- (id)_copyWithoutInsignificantPrefix:(_Bool)arg1 andCharacters:(_Bool)arg2;
- (struct _NSRange)_rangeWithoutInsignificantPrefix:(_Bool)arg1 andCharacters:(_Bool)arg2;
@end

