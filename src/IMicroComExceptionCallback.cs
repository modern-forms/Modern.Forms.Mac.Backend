using System;

namespace Avalonia.MicroCom
{
    internal interface IMicroComExceptionCallback
    {
        void RaiseException(Exception e);
    }
}
