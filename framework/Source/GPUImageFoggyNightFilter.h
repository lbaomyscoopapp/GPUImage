#import "GPUImageFilterGroup.h"

@class GPUImagePicture;

// Note: If you want to use this effect you have to add lookup_foggy_night.png
//       from Resources folder to your application bundle.

@interface GPUImageFoggyNightFilter : GPUImageFilterGroup
{
    GPUImagePicture *lookupImageSource;
}

@end
