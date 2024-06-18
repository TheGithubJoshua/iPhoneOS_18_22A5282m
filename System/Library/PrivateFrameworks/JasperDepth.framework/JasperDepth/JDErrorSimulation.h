@interface JDErrorSimulation : NSObject

- (double *)constErrorForSpot:(int)a0 echo:(int)a1 inBank:(int)a2;
- (id)initWithConstErrorMean:(double)a0 constErrorStd:(double)a1 framePercentageErrorStd:(double)a2;
- (void)injectErrorsToPointCloud:(id)a0;

@end
