@class NSString;

@interface TIContextChangeEvent : TIUserAction

@property (nonatomic) BOOL isSelection;
@property (nonatomic) BOOL extendsPriorWord;
@property (copy, nonatomic) NSString *inWord;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } inWordRange;
@property (nonatomic) unsigned long long selectionLocation;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTIKeyboardState:(id)a0 andActionType:(int)a1;

@end
