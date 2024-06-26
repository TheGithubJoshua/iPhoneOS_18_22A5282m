@interface WiFiUsagePrivacyFilter : NSObject

+ (id)sanitizedOUI:(id)a0;
+ (id)twoSigFig:(unsigned long long)a0;
+ (id)timePercentage:(double)a0 overTotalDuration:(double)a1;
+ (struct { long long x0[3]; BOOL x1[3]; })getPercForFloatByBand:(struct { double x0[3]; BOOL x1[3]; })a0 Over:(double)a1;
+ (BOOL)isLocallyAdministeredBitSetInBSSString:(id)a0;
+ (BOOL)isInternalInstall;
+ (id)getLabelForBandUsageDuration:(struct { double x0[3]; BOOL x1[3]; })a0 overTotalDuration:(double)a1 binned:(BOOL)a2;
+ (id)getLabelForIntegerByBand:(struct { long long x0[3]; BOOL x1[3]; })a0 withCap:(BOOL)a1;
+ (id)getBinTimeInterval:(double)a0 As:(unsigned long long)a1;
+ (id)getLabelForCoreRssiMode:(unsigned long long)a0;
+ (id)oui:(id)a0;
+ (id)localTimestamp:(id)a0;
+ (int)bandFromFlags:(id)a0 OrChannel:(id)a1;
+ (id)getLabelForRssiByBand:(struct { long long x0[3]; BOOL x1[3]; })a0;
+ (id)getLabelForTDTrigger:(int)a0;
+ (id)getLabelForRssiDeltaByBandTransition:(struct { long long x0[3][3]; BOOL x1[3][3]; })a0;
+ (void)initialize;
+ (id)reformatMACAddress:(id)a0;
+ (id)toHEXString:(char *)a0 length:(unsigned long long)a1;
+ (long long)getSumAllBands:(struct { long long x0[3]; BOOL x1[3]; })a0;
+ (struct { long long x0[3]; BOOL x1[3]; })getModeCountersByCandidatesByBand:(id)a0;
+ (id)getLabelForNeighborsByBand:(id)a0;
+ (id)numberWithInstances:(unsigned long long)a0;
+ (id)toBinString:(id)a0;
+ (id)getLabelForTDMode:(int)a0;
+ (BOOL)canPerformActionWithSampleRate:(unsigned long long)a0;
+ (id)getLabelForRTCoexType:(unsigned long long)a0;
+ (id)getLabelForSteeringRequest:(unsigned long long)a0;
+ (id)getLabelForPercIntegerByBand:(struct { long long x0[3]; BOOL x1[3]; })a0;
+ (id)getBinEvery10Over100:(unsigned long long)a0 As:(unsigned long long)a1;
+ (id)describeSampleRate:(unsigned long long)a0;
+ (id)macAddressData:(id)a0;
+ (id)getLabelForIntegerByBand:(struct { long long x0[3]; BOOL x1[3]; })a0 In:(id)a1 WithLowestEdge:(id)a2 As:(unsigned long long)a3;
+ (id)getBinFor:(long long)a0 In:(id)a1 WithLowestEdge:(id)a2 As:(unsigned long long)a3;
+ (struct { long long x0[3]; BOOL x1[3]; })getPercForIntegerByBand:(struct { long long x0[3]; BOOL x1[3]; })a0 Over:(unsigned long long)a1;
+ (id)numberWithDurationMillisecond:(double)a0;
+ (id)getLabelForRssiDeltaByBand:(struct { long long x0[3]; BOOL x1[3]; })a0;
+ (id)bandAsString:(int)a0;
+ (id)numberWithByteCount:(unsigned long long)a0;
+ (id)getSumArrayCountAllBand:(id)a0;
+ (id)numberWithDuration:(double)a0;
+ (id)getLabelForIntegerByBandTransition:(struct { long long x0[3][3]; BOOL x1[3][3]; })a0 In:(id)a1 WithLowestEdge:(id)a2 As:(unsigned long long)a3;
+ (id)getHumanSecondsFromTimeInterval:(double)a0;
+ (id)getHumanSecondsFromObject:(id)a0;
+ (BOOL)isLocallyAdministeredBitSetInBSSData:(id)a0;
+ (id)getLabelForIntegerByBand:(struct { long long x0[3]; BOOL x1[3]; })a0;
+ (id)numberWithFrameCount:(unsigned long long)a0;

@end
