@interface CSConfig : NSObject

+ (unsigned int)inputRecordingBytesPerPacket;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (unsigned int)hearstNumberOfBytesPerChunk;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (long long)inputRecordingEncoderAudioQuality;
+ (unsigned long long)channelForOutputReference;
+ (int)csAudioProcessingQueuePriority;
+ (unsigned short)zeroFilterApproxAbsSpeechThreshold;
+ (id)inputRecordingSampleRateConverterAlgorithm;
+ (BOOL)inputRecordingIsFloat;
+ (unsigned long long)channelForProcessedInput;
+ (double)inputRecordingBufferDuration;
+ (float)daysBeforeRemovingLogFiles;
+ (float)remoteVADDuration;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned int)inputRecordingNumberOfChannels;
+ (unsigned int)EncryptionAudioSampleByteDepth;
+ (double)defaultContinousFingerprintBufferDuration;
+ (unsigned int)audioConverterBitrate;
+ (unsigned long long)zeroFilterWindowSizeInMsForReport;
+ (unsigned long long)zeroFilterWindowSizeInMs;
+ (float)inputRecordingDurationInSecs;
+ (double)defaultContinousFingerprintBufferDurationForRemora;
+ (float)inputRecordingSampleRateNarrowBand;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (float)inputRecordingSampleRate;
+ (float)inputRecordingDurationInSecsExtended;
+ (unsigned long long)serverLoggingChannelBitset;
+ (unsigned int)hearstNumberOfSamplesPerChunk;

@end
