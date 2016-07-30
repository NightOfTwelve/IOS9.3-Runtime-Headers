//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, UIUpdateItem;

__attribute__((visibility("hidden")))
@interface UITableViewUpdateGap : NSObject
{
    UIUpdateItem *_firstUpdateItem;
    UIUpdateItem *_lastUpdateItem;
    NSMutableArray *_deleteItems;
    NSMutableArray *_insertItems;
    struct {
        unsigned int hasAutomaticAnimationItems:1;
    } _gapFlags;
}

+ (id)gapWithUpdateItem:(id)arg1;
@property(readonly, nonatomic) NSArray *insertItems; // @synthesize insertItems=_insertItems;
@property(readonly, nonatomic) NSArray *deleteItems; // @synthesize deleteItems=_deleteItems;
@property(retain, nonatomic) UIUpdateItem *lastUpdateItem; // @synthesize lastUpdateItem=_lastUpdateItem;
@property(retain, nonatomic) UIUpdateItem *firstUpdateItem; // @synthesize firstUpdateItem=_firstUpdateItem;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasAutomaticAnimationItems;
@property(readonly, nonatomic) _Bool isSectionBasedGap;
@property(readonly, nonatomic) NSArray *updateItems;
@property(readonly, nonatomic) _Bool hasInserts;
@property(readonly, nonatomic) _Bool isDeleteBasedGap;
- (void)addUpdateItem:(id)arg1;
- (id)description;
- (id)init;

@end

