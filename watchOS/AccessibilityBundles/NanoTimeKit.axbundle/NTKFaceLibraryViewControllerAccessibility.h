//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "__NTKFaceLibraryViewControllerAccessibility_super.h"

@interface NTKFaceLibraryViewControllerAccessibility : __NTKFaceLibraryViewControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_deactivateAddFaceAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_scrollToAndSetupFaceAtIndex:(unsigned long long)arg1 updateLibraryFaceCollection:(_Bool)arg2;
- (void)endInteractiveLibraryPresentation;
- (id)_accessibilityCustomActionsForPageAtIndex:(unsigned long long)arg1 forPageScrollViewController:(id)arg2;
- (_Bool)_axAddPageViewControllerIsActive;
- (_Bool)_axStartEditing;
- (_Bool)_axDeactivateAddFace;
- (_Bool)_axCanUseOverlayButton:(id)arg1;
- (id)_accessibilityHintForPageAtIndex:(unsigned long long)arg1 forPageScrollViewController:(id)arg2;
- (id)_accessibilityLabelForPageAtIndex:(unsigned long long)arg1 forPageScrollViewController:(id)arg2;
- (id)_accessibilityValueForPageAtIndex:(unsigned long long)arg1 forPageScrollViewController:(id)arg2;
- (_Bool)_accessibilityShouldSwipeBetweenPagesForPageScrollViewController:(id)arg1;
- (void)_activateAddFaceWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

