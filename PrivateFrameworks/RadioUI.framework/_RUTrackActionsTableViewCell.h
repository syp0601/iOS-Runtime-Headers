/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class UIImage, UIImageView, UIView;

@interface _RUTrackActionsTableViewCell : UITableViewCell {
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    } _accessoryImageOffset;
    UIImageView *_accessoryImageView;
    BOOL _displaysAsDisabled;
    UIView *_topSeparatorView;
}

@property(retain) UIImage * accessoryImage;
@property struct UIOffset { float x1; float x2; } accessoryImageOffset;
@property BOOL displaysAsDisabled;
@property(retain) UIImage * highlightedAccessoryImage;
@property BOOL showsTopSeparator;

- (void).cxx_destruct;
- (id)accessoryImage;
- (struct UIOffset { float x1; float x2; })accessoryImageOffset;
- (BOOL)displaysAsDisabled;
- (id)highlightedAccessoryImage;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setAccessoryImage:(id)arg1;
- (void)setAccessoryImageOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setDisplaysAsDisabled:(BOOL)arg1;
- (void)setHighlightedAccessoryImage:(id)arg1;
- (void)setShowsTopSeparator:(BOOL)arg1;
- (BOOL)showsTopSeparator;

@end
