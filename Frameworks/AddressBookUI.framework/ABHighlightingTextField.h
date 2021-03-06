/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITextField.h"

@class UIColor;

@interface ABHighlightingTextField : UITextField
{
    BOOL _isHighlighted;
    BOOL _isHighlightingEnabled;
    UIColor *_savedTextColor;
    UIColor *_highlightedTextColor;
    BOOL _showsClearButtonWhenEmpty;
    id <ABResponderDelegate> _responderDelegate;
}

@property(nonatomic) BOOL showsClearButtonWhenEmpty; // @synthesize showsClearButtonWhenEmpty=_showsClearButtonWhenEmpty;
@property(nonatomic) id <ABResponderDelegate> responderDelegate; // @synthesize responderDelegate=_responderDelegate;
@property(retain, nonatomic, setter=abSetHighlightedTextColor:) UIColor *abHighlightedTextColor; // @synthesize abHighlightedTextColor=_highlightedTextColor;
@property(nonatomic, setter=abSetHighlightingEnabled:) BOOL abIsHighlightingEnabled; // @synthesize abIsHighlightingEnabled=_isHighlightingEnabled;
@property(nonatomic, setter=abSetHighlighted:) BOOL abIsHighlighted; // @synthesize abIsHighlighted=_isHighlighted;
- (id)_previousKeyResponder;
- (id)_nextKeyResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)_showsClearButtonWhenEmpty;
- (void)setTextColor:(id)arg1;
- (void)dealloc;

@end

