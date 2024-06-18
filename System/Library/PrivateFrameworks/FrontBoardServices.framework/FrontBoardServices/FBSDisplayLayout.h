@class NSString, FBSDisplayConfiguration, NSDate, NSMutableArray;

@interface FBSDisplayLayout : NSObject <BSXPCCoding, BSDescriptionProviding>

@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long displayBacklightLevel;
@property (readonly, copy, nonatomic) NSMutableArray *elements;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })referenceBounds;
- (long long)displayType;
- (id)display;
- (id)succinctDescription;
- (void)encodeWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)_sortElements;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)_initWithElements:(id)a0;
- (void)finalizeLayout;
- (id)initWithXPCDictionary:(id)a0;
- (id)addElement:(id)a0;
- (void)removeElement:(id)a0;

@end
