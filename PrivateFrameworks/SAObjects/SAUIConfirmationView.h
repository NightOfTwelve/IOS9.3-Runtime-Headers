//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAUIConfirmationView : SAAceView
{
}

+ (id)confirmationViewWithDictionary:(id)arg1 context:(id)arg2;
+ (id)confirmationView;
@property(copy, nonatomic) NSString *denyText;
@property(copy, nonatomic) NSArray *denyCommands;
@property(copy, nonatomic) NSString *confirmText;
@property(copy, nonatomic) NSArray *confirmCommands;
@property(copy, nonatomic) NSString *cancelTrigger;
@property(copy, nonatomic) NSArray *allConfirmationOptions;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

