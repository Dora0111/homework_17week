class Solution
{
public:
    int firstBadVersion(int n)
    {
        if (n == 1)
        {
            return n;
        }
        else
        {
            int left = 0, right = n;
            while (left < right)
            {
                int mid = left + (right - left) / 2;
                if (isBadVersion(mid))
                {
                    right = mid;
                }
                else
                {
                    left = mid + 1;
                }
            }
            return left;
        }
    }
};

