//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL, SKUIArtworkList;

@interface SKUICategory : NSObject
{
    SKUIArtworkList *_artworkList;
    long long _categoryIdentifier;
    NSArray *_children;
    NSString *_name;
    NSString *_parentLabel;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(readonly, nonatomic) NSString *parentLabel; // @synthesize parentLabel=_parentLabel;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *children; // @synthesize children=_children;
@property(readonly, nonatomic) long long categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(readonly, nonatomic) SKUIArtworkList *artworkList; // @synthesize artworkList=_artworkList;
- (void).cxx_destruct;
- (id)subcategoryContainingURL:(id)arg1;
- (_Bool)containsURL:(id)arg1;
- (id)initWithCategoryDictionary:(id)arg1;

@end

