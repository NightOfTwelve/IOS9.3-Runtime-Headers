//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/UIRecentsInputViewControllerDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSMutableDictionary, NSString, UIButton, UICompatibilityInputViewController, UIKBSystemLayoutViewController, UIKeyboard, UILexicon, UIRecentsInputViewController, UIResponder, UITextInputTraits, UIView;
@protocol UISystemInputViewControllerDelegate, UITextInput;

@interface UISystemInputViewController : UIViewController <UIRecentsInputViewControllerDelegate>
{
    NSMutableDictionary *_accessoryViewControllers;
    NSMutableDictionary *_accessoryConstraints;
    _Bool _needsSetupAgain;
    _Bool _isVisible;
    _Bool _supportsTouchInput;
    _Bool _supportsRecentInputsIntegration;
    _Bool _isAutomaticResponderTransition;
    _Bool _willPresentFullscreen;
    _Bool _didDisplayRecents;
    id <UISystemInputViewControllerDelegate> _systemInputViewControllerDelegate;
    UIResponder<UITextInput> *_persistentDelegate;
    UIKeyboard *_keyboard;
    NSArray *_keyboardConstraints;
    UICompatibilityInputViewController *_keyboardVC;
    NSArray *_editorConstraints;
    UIKBSystemLayoutViewController *_editorVC;
    UIButton *_doneButton;
    UIViewController *_inputVC;
    UIRecentsInputViewController *_recentsVC;
    NSLayoutConstraint *_verticalAlignment;
    NSLayoutConstraint *_horizontalAlignment;
    UIResponder<UITextInput> *_nextInputDelegate;
    UITextInputTraits *_textInputTraits;
    UILexicon *_cachedRecents;
    UIView *_containingView;
    UIView *_contentLayoutView;
    long long _blurEffectStyle;
}

+ (id)systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 containingResponder:(id)arg3;
+ (id)systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2;
+ (_Bool)canUseSystemInputViewControllerForResponder:(id)arg1;
@property(nonatomic) long long blurEffectStyle; // @synthesize blurEffectStyle=_blurEffectStyle;
@property(retain, nonatomic) UIView *contentLayoutView; // @synthesize contentLayoutView=_contentLayoutView;
@property(retain, nonatomic) UIView *containingView; // @synthesize containingView=_containingView;
@property(nonatomic) _Bool didDisplayRecents; // @synthesize didDisplayRecents=_didDisplayRecents;
@property(nonatomic) _Bool willPresentFullscreen; // @synthesize willPresentFullscreen=_willPresentFullscreen;
@property(retain, nonatomic) UILexicon *cachedRecents; // @synthesize cachedRecents=_cachedRecents;
@property(retain, nonatomic) UITextInputTraits *textInputTraits; // @synthesize textInputTraits=_textInputTraits;
@property(retain, nonatomic) UIResponder<UITextInput> *nextInputDelegate; // @synthesize nextInputDelegate=_nextInputDelegate;
@property(retain, nonatomic) NSLayoutConstraint *horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
@property(retain, nonatomic) NSLayoutConstraint *verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(retain, nonatomic) UIRecentsInputViewController *recentsVC; // @synthesize recentsVC=_recentsVC;
@property(retain, nonatomic) UIViewController *inputVC; // @synthesize inputVC=_inputVC;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIKBSystemLayoutViewController *editorVC; // @synthesize editorVC=_editorVC;
@property(retain, nonatomic) NSArray *editorConstraints; // @synthesize editorConstraints=_editorConstraints;
@property(retain, nonatomic) UICompatibilityInputViewController *keyboardVC; // @synthesize keyboardVC=_keyboardVC;
@property(retain, nonatomic) NSArray *keyboardConstraints; // @synthesize keyboardConstraints=_keyboardConstraints;
@property(retain, nonatomic) UIKeyboard *keyboard; // @synthesize keyboard=_keyboard;
@property(retain, nonatomic) UIResponder<UITextInput> *persistentDelegate; // @synthesize persistentDelegate=_persistentDelegate;
@property(nonatomic) _Bool isAutomaticResponderTransition; // @synthesize isAutomaticResponderTransition=_isAutomaticResponderTransition;
@property(nonatomic) id <UISystemInputViewControllerDelegate> systemInputViewControllerDelegate; // @synthesize systemInputViewControllerDelegate=_systemInputViewControllerDelegate;
@property(nonatomic) _Bool supportsRecentInputsIntegration; // @synthesize supportsRecentInputsIntegration=_supportsRecentInputsIntegration;
@property(nonatomic) _Bool supportsTouchInput; // @synthesize supportsTouchInput=_supportsTouchInput;
- (void)_willResume:(id)arg1;
- (void)_didSuspend:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)setupKeyboard;
- (void)setAlignmentConstraint:(id)arg1 forAxis:(long long)arg2;
- (id)alignmentConstraintForAxis:(long long)arg1;
- (void)setAccessoryViewController:(id)arg1 forEdge:(long long)arg2;
- (id)accessoryViewControllerForEdge:(long long)arg1;
- (id)_accessoryViewControllerForEdge:(long long)arg1;
- (unsigned long long)_horizontalLayoutTypeForEdge:(long long)arg1;
- (unsigned long long)_verticalLayoutTypeForEdge:(long long)arg1;
- (void)_removeAccessoryViewController:(id)arg1;
- (void)_addAccessoryViewController:(id)arg1;
- (void)setConstraints:(id)arg1 forEdge:(long long)arg2;
- (id)constraintsForEdge:(long long)arg1;
- (void)updateViewConstraints;
- (void)updateAlignmentConstraints;
- (id)constraintFromView:(id)arg1 attribute:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4;
- (void)reloadInputViewsForPersistentDelegate;
- (void)inputModeDidChange:(id)arg1;
- (id)doneButtonStringForCurrentInputDelegate;
- (void)findNextInputDelegate;
@property(nonatomic) struct UIEdgeInsets unfocusedFocusGuideOutsets;
- (id)preferredFocusedItem;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)_disableAutomaticKeyboardBehavior;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_returnButtonPressed;
- (void)_dismissSystemInputViewController;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)notifyDelegateWithAccessoryVisibility:(_Bool)arg1;
- (void)configureRecentsVCIfNecessary;
- (void)switchToKeyboard;
- (void)didSelectRecentInput;
- (void)_createKeyboardIfNecessary;
- (void)_addChildInputViewController;
- (void)_setNonInputViewVisibility:(_Bool)arg1;
- (void)populateCoreHierarchy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

