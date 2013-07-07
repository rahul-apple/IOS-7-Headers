/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIViewController.h"

#import "SKUINetworkErrorDelegate.h"
#import "SKUIProductPageOverlayDelegate.h"
#import "SKUIWishlistDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class NSOperationQueue, SKUIClientContext, SKUIIPadSearchController, SKUINetworkErrorViewController, SKUIPopoverObserver, SKUIProductPageOverlayController, SKUIWishlistViewController, UIBarButtonItem;

@interface SKUIViewController : UIViewController <SKUINetworkErrorDelegate, SKUIProductPageOverlayDelegate, SKUIWishlistDelegate, UIPopoverControllerDelegate>
{
    SKUIClientContext *_clientContext;
    SKUINetworkErrorViewController *_networkErrorViewController;
    NSOperationQueue *_operationQueue;
    SKUIProductPageOverlayController *_productPageOverlayController;
    SKUIIPadSearchController *_searchController;
    BOOL _wishlistButtonHidden;
    UIBarButtonItem *_wishlistButtonItem;
    SKUIPopoverObserver *_wishlistPopoverObserver;
    SKUIWishlistViewController *_wishlistViewController;
}

@property(readonly, nonatomic) UIBarButtonItem *_wishlistButtonItem; // @synthesize _wishlistButtonItem;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_showDialogWithError:(id)arg1;
- (void)_wishlistAction:(id)arg1;
- (void)_setWishlistButtonHidden:(BOOL)arg1;
- (void)wishlist:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (void)_wishlistPopoverDidDismiss;
- (void)networkErrorViewControllerInvalidated:(id)arg1;
- (void)showError:(id)arg1;
- (void)showDefaultNavigationItems;
- (void)reloadData;
@property(readonly, nonatomic) SKUIIPadSearchController *IPadSearchController;
- (void)dealloc;

@end
