@interface CUIKTextProviderUtils : NSObject

+ (id)timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)a0 designatorRequiresWhitespace:(BOOL)a1;
+ (BOOL)dropLeftRedundantDesignator;
+ (BOOL)smallCapsAllowed;
+ (BOOL)designatorRequiresWhitespace;

@end
