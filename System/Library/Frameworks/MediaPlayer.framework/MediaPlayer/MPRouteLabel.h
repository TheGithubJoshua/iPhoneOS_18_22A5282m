@class BSUIEmojiLabelView, NSString, UIColor, UIFont, UILabel, MPAVRoute, NSMutableSet;

@interface MPRouteLabel : UIView {
    NSString *_designatedGroupLeaderName;
    NSString *_previousDesignatedGroupLeaderName;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousBounds;
    UIFont *_previousFont;
    NSMutableSet *_previousRouteNames;
    BOOL _previousForcesUppercaseText;
    BOOL _previousDisplayAsSiriSuggestion;
    long long _previousTruncationMode;
    NSMutableSet *_routeNames;
    UILabel *_sizingLabel;
}

@property (retain, nonatomic) BSUIEmojiLabelView *contentView;
@property (nonatomic) long long minimumEndCharacterCount;
@property (readonly, copy, nonatomic) NSString *text;
@property (nonatomic) long long truncationMode;
@property (nonatomic) BOOL forcesUppercaseText;
@property (nonatomic) BOOL displayAsSiriSuggestion;
@property (retain, nonatomic) MPAVRoute *route;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (readonly, nonatomic) double _baselineOffsetFromBottom;
@property (nonatomic) long long textAlignment;
@property (nonatomic, setter=_setTextColorFollowsTintColor:) BOOL _textColorFollowsTintColor;

- (void)_updateTitleIfNeeded;
- (id)_routeNamesSortedLength:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)_marketingNames;
- (id)_plusSeparatedRouteNames:(id)a0;
- (void)_routeDidChangeNotification:(id)a0;
- (void)removeRouteName:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_labelFitsText:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)_updateRouteLabel;
- (id)_formattedRouteNameForDesignatedGroupLeaderNameText:(id)a0 routeNamesText:(id)a1;
- (void)addRouteName:(id)a0;
- (long long)_compareLength:(id)a0 with:(id)a1;
- (id)_bestStringThatFitsSize:(struct CGSize { double x0; double x1; })a0;
- (void)addRouteNamesFromArray:(id)a0;
- (struct CGSize { double x0; double x1; })_labelSizeForText:(id)a0;
- (void)layoutSubviews;
- (void)removeRouteNamesFromArray:(id)a0;
- (id)_truncateText:(id)a0 by:(long long)a1;
- (id)_routeNamesSortedAlphanumeric:(id)a0;

@end
