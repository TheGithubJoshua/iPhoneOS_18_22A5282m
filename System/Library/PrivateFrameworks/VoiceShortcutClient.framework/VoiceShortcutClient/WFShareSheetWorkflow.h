@class NSString;

@interface WFShareSheetWorkflow : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned short glyphCharacter;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) struct CGImage { } *iconImage;
@property (readonly, nonatomic) double iconScale;

- (id)initWithCoder:(id)a0;
- (void)setIconImage:(struct CGImage { } *)a0 scale:(double)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0 name:(id)a1 glyphCharacter:(unsigned short)a2;

@end
