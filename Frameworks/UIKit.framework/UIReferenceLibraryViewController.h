/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "_UILongDefinitionViewDelegate.h"
#import "_UIShortDefinitionViewDelegate.h"

@class NSArray, NSString, UIButton, UILabel, UINavigationController, UITableViewController, UIView, UIWindow;

@interface UIReferenceLibraryViewController : UIViewController <_UIShortDefinitionViewDelegate, _UILongDefinitionViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    NSString *_term;
    NSArray *_definitionValues;
    UIView *_diddlyDoView;
    UIView *_buttonsView;
    UILabel *_dictionaryLabel;
    UIButton *_doneButton;
    UIView *_headerView;
    UIView *_contentView;
    UIView *_footerView;
    UIView *_dictionaryDisplayView;
    int _oldPopoverStyle;
    UINavigationController *_baseNavController;
    UITableViewController *_multiDefViewController;
    UIViewController *_longDefViewController;
    UIWindow *_rotationDecider;
    id _dismissCompletionHandler;
}

+ (id)_colorAttributes;
+ (id)_dictionaryDefinitionAttributes;
+ (id)_localizedDictionaryTitleAttributes;
+ (id)_pressedButtonImage;
+ (id)_defaultButtonImage;
+ (id)_diddlyDoViewLineColor;
+ (id)_foregroundColor;
+ (id)_backgroundColor;
+ (id)_viewControllerForReferenceWithString:(id)arg1 options:(unsigned int)arg2;
+ (id)_popoverControllerForReferenceLibraryWithString:(id)arg1;
+ (BOOL)dictionaryHasDefinitionForTerm:(id)arg1;
@property(copy, nonatomic) id dismissCompletionHandler; // @synthesize dismissCompletionHandler=_dismissCompletionHandler;
@property(retain, nonatomic, setter=_setRotationDecider:) UIWindow *_rotationDecider; // @synthesize _rotationDecider;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_setPopoverController:(id)arg1;
- (void)viewDidLoad;
- (unsigned int)supportedInterfaceOrientations;
- (id)_dictionaryDisplayView;
- (id)_contentView;
- (id)_footerView;
- (id)_headerView;
- (id)_doneButton;
- (id)_buttonsView;
- (id)_diddlyDoView;
- (id)_dictionaryLabel;
- (id)_buttonWithTitle:(id)arg1;
- (id)_colorAttributes;
- (id)_dictionaryDefinitionAttributes;
- (id)_localizedDictionaryTitleAttributes;
- (id)_pressedButtonImage;
- (id)_defaultButtonImage;
- (id)_diddlyDoViewLineColor;
- (id)_foregroundColor;
- (id)_backgroundColor;
- (void)_backButtonWasTapped:(id)arg1;
- (void)_definitionValueWasChosen:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)_searchWikipedia:(id)arg1;
- (void)_doneButtonPressed:(id)arg1;
- (void)_searchWeb:(id)arg1;
- (void)dealloc;
- (id)initWithTerm:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

