@class NSArray, ISIcon;

@interface ISDecoratedIcon : ISConcreteIcon {
    NSArray *_decorations;
}

@property (readonly) ISIcon *icon;
@property (readonly) NSArray *decorations;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)makeResourceProvider;
- (id)symbol;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)iconWithDecorations:(id)a0;
- (id)initWithIcon:(id)a0 decorations:(id)a1;

@end
