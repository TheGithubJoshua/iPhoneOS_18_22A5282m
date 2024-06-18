@class TCVegaJSDocument, NSString, JSContext, TCVegaCGCanvas;

@interface TCVegaRenderer : NSObject

@property (retain, nonatomic) NSString *spec;
@property (retain, nonatomic) TCVegaCGCanvas *vegaCanvas;
@property (retain, nonatomic) TCVegaJSDocument *vegaJSDocument;
@property (nonatomic) double scaleFactor;
@property (retain) JSContext *context;

+ (id)vegaJS;
+ (id)vegaliteJS;
+ (id)vg2canvasJS;

- (id)initWithSpec:(id)a0;
- (id)init;
- (id)cursor;
- (struct CGImage { } *)CGImage;
- (unsigned long long)height;
- (unsigned long long)width;
- (void).cxx_destruct;
- (id)vegaContext;
- (id)initWithSpec:(id)a0 config:(id)a1 scaleFactor:(double)a2;
- (void)triggerEventWithType:(id)a0 event:(id)a1;

@end
