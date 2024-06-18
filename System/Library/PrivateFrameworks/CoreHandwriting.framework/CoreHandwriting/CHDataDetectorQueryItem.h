@class NSSet, DDScannerResult;

@interface CHDataDetectorQueryItem : NSObject

@property (readonly, copy, nonatomic) NSSet *strokeIdentifiers;
@property (readonly, nonatomic) DDScannerResult *dataDetectorResult;
@property (readonly, nonatomic) const struct CGPath { } *estimatedBaseline;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (BOOL)isEqualToDataDetectorQueryItem:(id)a0;
- (id)initWithStrokeIdentifiers:(id)a0 detectedResult:(id)a1 estimatedBaseline:(struct CGPath { } *)a2;

@end
