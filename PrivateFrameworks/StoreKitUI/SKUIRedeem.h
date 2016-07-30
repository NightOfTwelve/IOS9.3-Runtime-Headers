//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL, SKUIArtworkList, UIImage;

@interface SKUIRedeem : NSObject
{
    _Bool _hideItemView;
    NSArray *_items;
    NSString *_inAppPurchase;
    NSString *_credit;
    NSString *_balance;
    NSDictionary *_thankYouDictionary;
    NSURL *_redirectURL;
    UIImage *_headerImage;
    SKUIArtworkList *_headerArtworkList;
    NSString *_title;
    NSString *_message;
    NSArray *_links;
    double _ITunesPassLearnMoreAlertInterval;
}

@property(nonatomic) double ITunesPassLearnMoreAlertInterval; // @synthesize ITunesPassLearnMoreAlertInterval=_ITunesPassLearnMoreAlertInterval;
@property(nonatomic) _Bool hideItemView; // @synthesize hideItemView=_hideItemView;
@property(retain, nonatomic) NSArray *links; // @synthesize links=_links;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) SKUIArtworkList *headerArtworkList; // @synthesize headerArtworkList=_headerArtworkList;
@property(retain, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
@property(retain, nonatomic) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(retain, nonatomic) NSDictionary *thankYouDictionary; // @synthesize thankYouDictionary=_thankYouDictionary;
@property(copy, nonatomic) NSString *balance; // @synthesize balance=_balance;
@property(copy, nonatomic) NSString *credit; // @synthesize credit=_credit;
@property(retain, nonatomic) NSString *inAppPurchase; // @synthesize inAppPurchase=_inAppPurchase;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)init;

@end

