//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNAvatarCardController.h>

#import <ContactsUI/CNAvatarCardViewControllerDelegate-Protocol.h>
#import <ContactsUI/UIGestureRecognizerDelegate-Protocol.h>

@class CNAvatarCardViewController, NSString, UIGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface CNAvatarCardCustomController : CNAvatarCardController <CNAvatarCardViewControllerDelegate, UIGestureRecognizerDelegate>
{
    UIView *_sourceView;
    CNAvatarCardViewController *_cardViewController;
    UIGestureRecognizer *_orbGestureRecognizer;
}

@property(retain, nonatomic) UIGestureRecognizer *orbGestureRecognizer; // @synthesize orbGestureRecognizer=_orbGestureRecognizer;
@property(retain, nonatomic) CNAvatarCardViewController *cardViewController; // @synthesize cardViewController=_cardViewController;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)cardViewControllerDidDismiss:(id)arg1;
- (void)cardViewControllerWillDismiss:(id)arg1;
- (void)cardViewController:(id)arg1 willShowActions:(id)arg2;
- (id)cardViewController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (void)showCard:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isVisible;
- (id)sourceView;
- (void)setSourceView:(id)arg1;
- (_Bool)bypassActionValidation;
- (void)setBypassActionValidation:(_Bool)arg1;
- (id)actionCategories;
- (void)setActionCategories:(id)arg1;
- (void)setContacts:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

