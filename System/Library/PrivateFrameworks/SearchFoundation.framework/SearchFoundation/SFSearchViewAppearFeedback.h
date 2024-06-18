@class NSString;

@interface SFSearchViewAppearFeedback : SFFeedback

@property (nonatomic) unsigned long long viewAppearEvent;
@property (nonatomic) BOOL isOnLockScreen;
@property (nonatomic) BOOL isOverApp;
@property (nonatomic) BOOL readerTextAvailable;
@property (copy, nonatomic) NSString *preexistingInput;
@property (copy, nonatomic) NSString *originatingApp;
@property (nonatomic) BOOL isUsingLoweredSearchBar;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEvent:(unsigned long long)a0;

@end
