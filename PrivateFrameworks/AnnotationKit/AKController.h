//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AKActionController, AKAttributeController, AKFormFeatureDetectorController, AKIntelligentSketchController, AKMainEventHandler, AKModelController, AKPageController, AKPeripheralAvailabilityManager_iOS, AKSignatureModelController, AKTextEditorController, AKToolController, AKToolbarViewController, AKUndoController, NSMapTable, NSMutableArray, UIView;
@protocol AKControllerDelegateProtocol;

@interface AKController : NSObject
{
    _Bool overlayShouldPixelate;
    _Bool _isTestingInstance;
    _Bool _showingMenu;
    id <AKControllerDelegateProtocol> _delegate;
    AKModelController *_modelController;
    UIView *_toolbarView;
    unsigned long long _currentPageIndex;
    NSMutableArray *_pageControllers;
    NSMapTable *_pageModelControllersToPageControllers;
    AKActionController *_actionController;
    AKToolController *_toolController;
    AKToolbarViewController *_toolbarViewController;
    AKAttributeController *_attributeController;
    AKUndoController *_undoController;
    AKMainEventHandler *_mainEventHandler;
    AKTextEditorController *_textEditorController;
    AKIntelligentSketchController *_intelligentSketchController;
    AKSignatureModelController *_signatureModelController;
    AKFormFeatureDetectorController *_formDetectionController;
    AKPeripheralAvailabilityManager_iOS *_peripheralAvailabilityManager;
    unsigned long long _pasteCascadingMultiplier;
    long long _lastPasteboardChangeCount;
    unsigned long long _creationCascadingMultiplier;
    AKPageController *_lastCreationCascadingPageController;
}

+ (void)adjustAnnotationBoundsToFitText:(id)arg1;
+ (void)renderAnnotation:(id)arg1 inContext:(struct CGContext *)arg2;
+ (_Bool)hasPressureCapableHardware;
+ (_Bool)canConnectToStylus;
+ (id)akBundleIdentifier;
+ (id)akBundle;
+ (id)controllerWithDelegate:(id)arg1;
@property __weak AKPageController *lastCreationCascadingPageController; // @synthesize lastCreationCascadingPageController=_lastCreationCascadingPageController;
@property unsigned long long creationCascadingMultiplier; // @synthesize creationCascadingMultiplier=_creationCascadingMultiplier;
@property long long lastPasteboardChangeCount; // @synthesize lastPasteboardChangeCount=_lastPasteboardChangeCount;
@property unsigned long long pasteCascadingMultiplier; // @synthesize pasteCascadingMultiplier=_pasteCascadingMultiplier;
@property(getter=isShowingMenu) _Bool showingMenu; // @synthesize showingMenu=_showingMenu;
@property(retain) AKPeripheralAvailabilityManager_iOS *peripheralAvailabilityManager; // @synthesize peripheralAvailabilityManager=_peripheralAvailabilityManager;
@property(retain) AKFormFeatureDetectorController *formDetectionController; // @synthesize formDetectionController=_formDetectionController;
@property(retain) AKSignatureModelController *signatureModelController; // @synthesize signatureModelController=_signatureModelController;
@property(retain) AKIntelligentSketchController *intelligentSketchController; // @synthesize intelligentSketchController=_intelligentSketchController;
@property(retain) AKTextEditorController *textEditorController; // @synthesize textEditorController=_textEditorController;
@property(retain) AKMainEventHandler *mainEventHandler; // @synthesize mainEventHandler=_mainEventHandler;
@property(retain) AKUndoController *undoController; // @synthesize undoController=_undoController;
@property(retain) AKAttributeController *attributeController; // @synthesize attributeController=_attributeController;
@property(retain) AKToolbarViewController *toolbarViewController; // @synthesize toolbarViewController=_toolbarViewController;
@property(retain) AKToolController *toolController; // @synthesize toolController=_toolController;
@property(retain) AKActionController *actionController; // @synthesize actionController=_actionController;
@property(retain) NSMapTable *pageModelControllersToPageControllers; // @synthesize pageModelControllersToPageControllers=_pageModelControllersToPageControllers;
@property(retain) NSMutableArray *pageControllers; // @synthesize pageControllers=_pageControllers;
@property _Bool isTestingInstance; // @synthesize isTestingInstance=_isTestingInstance;
@property unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(retain) UIView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(retain) AKModelController *modelController; // @synthesize modelController=_modelController;
@property __weak id <AKControllerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool overlayShouldPixelate; // @synthesize overlayShouldPixelate;
- (void).cxx_destruct;
- (struct CGRect)_popoverAnchorFrameInModelForAnnotations:(id)arg1;
- (id)pageControllerForAnnotation:(id)arg1;
- (id)pageControllerForPageModelController:(id)arg1;
- (id)currentPageController;
- (_Bool)shouldDrawVariableStrokeDoodles;
- (_Bool)_validateCutCopyDelete;
- (void)willHideMenu:(id)arg1;
- (void)willShowMenu:(id)arg1;
- (void)hideSelectionMenu:(id)arg1;
- (void)showSelectionMenu:(id)arg1;
- (_Bool)validateEditTextAnnotation:(id)arg1;
- (void)editTextAnnotation:(id)arg1;
- (_Bool)validateShowAttributeInspector:(id)arg1;
- (void)showAttributeInspector:(id)arg1;
- (_Bool)validateSelectAll:(id)arg1;
- (void)selectAll:(id)arg1;
- (_Bool)validateDuplicate:(id)arg1;
- (void)duplicate:(id)arg1;
- (_Bool)validateDelete:(id)arg1;
- (void)delete:(id)arg1;
- (_Bool)validatePaste:(id)arg1;
- (void)paste:(id)arg1;
- (_Bool)validateCopy:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)validateCut:(id)arg1;
- (void)cut:(id)arg1;
- (_Bool)validateRedo:(id)arg1;
- (void)redo:(id)arg1;
- (_Bool)validateUndo:(id)arg1;
- (void)undo:(id)arg1;
- (void)resetToDefaultToolMode;
- (id)toolbarButtonItemOfType:(unsigned long long)arg1;
- (id)rotationGestureRecognizer;
- (id)panGestureRecognizer;
- (id)pressGestureRecognizer;
- (id)doubleTapGestureRecognizer;
- (id)tapGestureRecognizer;
- (_Bool)handleEvent:(id)arg1;
- (struct CGRect)contentAlignedRectForRect:(struct CGRect)arg1 onPageAtIndex:(unsigned long long)arg2;
- (double)currentModelBaseScaleFactorForPageAtIndex:(unsigned long long)arg1;
- (long long)currentExifOrientationForPageAtIndex:(unsigned long long)arg1;
- (void)reloadVisibleToolbarItemIdentifiers;
- (void)commitEditing;
- (void)renderAnnotation:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)updateOverlayViewAtIndex:(unsigned long long)arg1;
- (void)relinquishOverlayAtIndex:(unsigned long long)arg1;
- (void)prepareOverlayAtIndex:(unsigned long long)arg1;
- (_Bool)isOverlayViewLoadedAtIndex:(unsigned long long)arg1;
- (id)overlayViewAtIndex:(unsigned long long)arg1;
- (void)performActionForSender:(id)arg1;
- (_Bool)validateSender:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)teardown;
- (id)initForTesting;
- (id)initWithDelegate:(id)arg1;

@end

