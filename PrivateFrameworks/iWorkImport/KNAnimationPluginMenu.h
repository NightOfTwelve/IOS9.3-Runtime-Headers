//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface KNAnimationPluginMenu : NSObject
{
    NSMutableDictionary *mLocalizedStringToDirectionMap;
    NSMutableDictionary *mDirectionToLocalizedStringMap;
    unsigned long long mDefaultDirection;
    NSMutableArray *mLocalizedDirections;
    NSMutableArray *mDirections;
}

+ (id)localizedStringForDirection:(unsigned long long)arg1 shortVersion:(_Bool)arg2;
+ (id)animationPluginMenu;
@property(nonatomic) unsigned long long defaultDirection; // @synthesize defaultDirection=mDefaultDirection;
@property(readonly, nonatomic) NSArray *directions; // @synthesize directions=mDirections;
@property(readonly, nonatomic) NSArray *localizedDirections; // @synthesize localizedDirections=mLocalizedDirections;
@property(readonly, nonatomic) unsigned long long count;
- (unsigned long long)directionForIndex:(unsigned long long)arg1;
- (unsigned long long)indexForDirection:(unsigned long long)arg1;
- (_Bool)containsDirection:(unsigned long long)arg1;
- (void)addDirection:(unsigned long long)arg1 useShortString:(_Bool)arg2;
- (void)addDirection:(unsigned long long)arg1 localizedMenuString:(id)arg2;
- (void)dealloc;
- (id)init;

@end

